module DataItemType = {
    [@bs.deriving abstract]
    type t = {
        value: string,
        label: React.element,
        [@bs.optional] children: array(t),
        [@bs.optional] groupBy: string,
      };
      

    let make = t;
}


module Range = {
    [@bs.deriving abstract]
    type t = {
        label: React.element,
        [@bs.optional] closeOverlay: bool,
        value: Js.Date.t, // Date | ((date: Date) => Date) todo
    };

    let make = t;
};

module FileType = {
    [@bs.deriving abstract]
    type t = {
        name: string,
        fileKey: string, // number | string todo
        [@bs.optional] status: [
            | `inited
            | `uploading
            | `error
            | `finished
        ],
        [@bs.optional] progress: int,
        url: string
    };

    let make = t;
}