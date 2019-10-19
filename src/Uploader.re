
  
  [@bs.module "rsuite"] [@react.component]
  external make:
    (
      ~action: string,

      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element=?,
      ~classPrefix: string=?,
      ~className: string=?,

      ~accept: string=?,
      ~autoUpload: bool=?,
      ~data: Js.Dict.t('a)=?,
      ~defaultFileList: array(RsuiteTypes.FileType.t)=?,
      ~disabled: bool=?,
      ~disabledFileItem: bool=?,
      ~fileList: array(RsuiteTypes.FileType.t)=?,
      ~headers: Js.Dict.t('a)=?,
      ~listType: [@bs.string] [
        | `text
        | `picture
        | `pictureText
      ]=?,
      ~maxPreviewFileSize: int=?,
      ~multiple: bool=?,
      ~name: string=?,
      ~onChange: (array(RsuiteTypes.FileType.t)) => unit=?,
      ~onError: (Js.Dict.t('a), RsuiteTypes.FileType.t) => unit=?,
      ~onPreview: (RsuiteTypes.FileType.t, ReactEvent.Synthetic.t) => unit=?,
      ~onProgress: (int, RsuiteTypes.FileType.t) => unit=?,
      ~onRemove: (RsuiteTypes.FileType.t) => unit=?,
      ~onReupload: (RsuiteTypes.FileType.t) => unit=?,
      ~onSuccess: (Js.Dict.t('a), RsuiteTypes.FileType.t) => unit=?,
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
  