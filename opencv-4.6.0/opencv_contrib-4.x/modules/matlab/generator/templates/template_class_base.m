% {{clss.name | upper}}
% Matlab handle class for OpenCV object classes
%
% This file was autogenerated, do not modify.
% See LICENSE for full modification and redistribution details.
% Copyright {{time.strftime("%Y", time.localtime())}} The OpenCV Foundation
classdef {{clss.name}} < handle
  properties (SetAccess = private, Hidden = true)
    ptr_ = 0; % handle to the underlying c++ clss instance
  end

  methods
    % constructor
    function this = {{clss.name}}(varargin)
      this.ptr_ = {{clss.name}}Bridge('new', varargin{:});
    end

    % destructor
    function delete(this)
      {{clss.name}}Bridge(this.ptr_, 'delete');
    end

    {% for function in clss.functions %}
    % {{function.__str__()}}
    function varargout = {{function.name}}(this, varargin)
      [varargout{1:nargout}] = {{clss.name}}Bridge('{{function.name}}', this.ptr_, varargin{:});
    end

    {% endfor %}
  end
end
