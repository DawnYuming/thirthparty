######
# Download via commit id
######
# Tengine
ocv_update(TENGINE_PKG_MD5_GITCODE 1b5908632b557275cd6e85b0c03f9690)
ocv_update(TENGINE_PKG_MD5_ORIGINAL 23f61ebb1dd419f1207d8876496289c5) # same as tengine_md5sum for TENGINE commit of e89cf8870de2ff0a80cfe626c0b52b2a16fb302e
# NVIDIA_OPTICAL_FLOW
ocv_update(NVIDIA_OPTICAL_FLOW_PKG_MD5_GITCODE 8d5b7eeb24d6ca9c6bcfdff4196d5b47)
ocv_update(NVIDIA_OPTICAL_FLOW_PKG_MD5_ORIGINAL a73cd48b18dcc0cc8933b30796074191)
# TIM-VX
ocv_update(TIM-VX_PKG_MD5_GITCODE 3f2a548b40b170668aaa60d4f60ba40b)
ocv_update(TIM-VX_PKG_MD5_ORIGINAL 92619cc4498014ac7a09834d5e33ebd5)

######
# Download from release page
#####
# TBB
ocv_update(TBB_RELEASE_GITCODE "v2020.2")
ocv_update(TBB_PKG_NAME_GITCODE "tbb-${TBB_RELEASE_GITCODE}")
ocv_update(TBB_PKG_MD5_GITCODE 4eeafdf16a90cb66e39a31c8d6c6804e)
ocv_update(TBB_PKG_MD5_ORIGINAL 5af6f6c2a24c2043e62e47205e273b1f) # same as OPENCV_TBB_RELEASE_MD5 for TBB release of v2020.2
# ADE
ocv_update(ADE_RELEASE_GITCODE "v0.1.1f")
ocv_update(ADE_PKG_NAME_GITCODE "ade-${ADE_RELEASE_GITCODE}")
ocv_update(ADE_PKG_MD5_GITCODE c12909e0ccfa93138c820ba91ff37b3c)
ocv_update(ADE_PKG_MD5_ORIGINAL b624b995ec9c439cbc2e9e6ee940d3a2) # same as ade_md5 for ADE release of v0.1.1f

#
# Replace download links for packages in opencv/opencv_3rdparty:
# 1. Extract repo owner and repo name from DL_URL.
# 2. Put repo owner and repo name into the placeholders of new DL_URL.
#
macro(ocv_download_url_gitcode_usercontent OWNER)
  string(REPLACE "/" ";" DL_URL_split ${DL_URL})
  list(GET DL_URL_split 5 __COMMIT_ID)
  list(GET DL_URL_split 6 __PKG_NAME)
  set(DL_URL "https://gitcode.net/${OWNER}/opencv_3rdparty/-/raw/${__COMMIT_ID}/")
  if(__PKG_NAME)
    set(DL_URL "${DL_URL}${__PKG_NAME}/")
  endif()
endmacro()
#
# Replace download links and checksums for archives/releases in other repositories:
# 1. Check if versions matched. If not matched, download from github instead.
# 2. Extract repo owner and repo name from DL_URL.
# 3. Put repo owner and repo name into the placeholders of new DL_URL.
# 4. Replace DL_HASH with the one downloaded from gitcode.net.
#
macro(ocv_download_url_gitcode_archive_commit_id)
  if(DL_HASH STREQUAL "${${DL_ID}_PKG_MD5_ORIGINAL}")
    string(REPLACE "/" ";" DL_URL_split ${DL_URL})
    list(GET DL_URL_split 3 __OWNER)
    list(GET DL_URL_split 4 __REPO_NAME)
    set(DL_URL "https://gitcode.net/mirrors/${__OWNER}/${__REPO_NAME}/-/archive/")
    set(DL_HASH "${${DL_ID}_PKG_MD5_GITCODE}")
  else()
    message(WARNING "Package ${DL_ID} from mirror gitcode.net is outdated and will be downloaded from github.com instead.")
  endif()
endmacro()
macro(ocv_download_url_gitcode_archive_release)
  if(DL_HASH STREQUAL "${${DL_ID}_PKG_MD5_ORIGINAL}")
    string(REPLACE "/" ";" DL_URL_split ${DL_URL})
    list(GET DL_URL_split 3 __OWNER)
    list(GET DL_URL_split 4 __REPO_NAME)
    set(DL_URL "https://gitcode.net/${__OWNER}/${__REPO_NAME}/-/archive/${${DL_ID}_RELEASE_GITCODE}/${__REPO_NAME}-")
    set(DL_HASH "${${DL_ID}_PKG_MD5_GITCODE}")
  else()
    message(WARNING "Package ${DL_ID} from mirror gitcode.net is outdated and will be downloaded from github.com instead.")
  endif()
endmacro()

if((DL_ID STREQUAL "FFMPEG") OR (DL_ID STREQUAL "IPPICV") OR (DL_ID STREQUAL "data") OR (DL_ID STREQUAL "xfeatures2d/boostdesc") OR (DL_ID STREQUAL "xfeatures2d/vgg"))
  ocv_download_url_gitcode_usercontent(opencv)
elseif(DL_ID STREQUAL "wechat_qrcode")
  ocv_download_url_gitcode_usercontent(mirrors/WeChatCV)
elseif((DL_ID STREQUAL "TENGINE") OR (DL_ID STREQUAL "NVIDIA_OPTICAL_FLOW") OR (DL_ID STREQUAL "TIM-VX"))
  ocv_download_url_gitcode_archive_commit_id()
elseif(DL_ID STREQUAL "TBB")
  ocv_download_url_gitcode_archive_release()
  set(OPENCV_TBB_SUBDIR "${TBB_PKG_NAME_GITCODE}" PARENT_SCOPE)
elseif(DL_ID STREQUAL "ADE")
  ocv_download_url_gitcode_archive_release()
  set(ade_subdir "${ADE_PKG_NAME_GITCODE}" PARENT_SCOPE)
else()
  message(STATUS "ocv_download: Unknown download ID ${DL_ID} for using mirror gitcode.net. Use original source instead.")
endif()
