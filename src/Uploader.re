
  
  [@bs.module "rsuite"] [@react.component]
  external make:
    (
      ~action: string,

      ~style: ReactDOMRe.Style.t=?,
      ~accept: string=?,
      ~autoUpload: bool=?,
      ~classPrefix: string=?,
      ~data: {.}=?, // TODO: as Dict
      ~defaultFileList: array(RsuiteTypes.FileType.t)=?,
      ~disabled: bool=?,
      ~disabledFileItem: bool=?,
      ~fileList: array(RsuiteTypes.FileType.t)=?,
      ~headers: {.}=?, // TODO as Dict
      ~listType: [@bs.string] [
        | `text
        | `picture
        | `pictureText
      ]=?,
      ~maxPreviewFileSize: int=?,
      ~multiple: bool=?,
      ~name: string=?,
      ~onChange: (array(RsuiteTypes.FileType.t)) => unit=?,
      ~onError: ({.}, RsuiteTypes.FileType.t) => unit=?, // TODO as Dic
      ~onPreview: (RsuiteTypes.FileType.t, ReactEvent.Synthetic.t) => unit=?,
      ~onProgress: (int, RsuiteTypes.FileType.t) => unit=?,
      ~onRemove: (RsuiteTypes.FileType.t) => unit=?,
      ~onReupload: (RsuiteTypes.FileType.t) => unit=?,
      ~onSuccess: ({.}, RsuiteTypes.FileType.t) => unit=?,
      ~onUpload: (RsuiteTypes.FileType.t) => unit=?,
      ~renderFileInfo: (
        RsuiteTypes.FileType.t,
        React.element
      ) => React.element=?,
      ~removable: bool=?,
      ~shouldQueueUpdate: (
        array(RsuiteTypes.FileType.t),
        array(RsuiteTypes.FileType.t),
        RsuiteTypes.FileType.t
      ) => bool=?,
      ~shouldUpload: (RsuiteTypes.FileType.t) => bool=?,
      ~timeout: int=?,
      ~toggleComponentClass: unit => React.element=?,
      ~withCredentials: bool=?,
    ) =>
    React.element =
    "Uploader";
  