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

module Locale = {
    [@bs.deriving abstract]
    type t = {
        sunday: string,
        monday: string,
        tuesday: string,
        wednesday: string,
        thursday: string,
        friday: string,
        saturday: string,
        ok: string,
        today: string,
        yesterday: string,
        hours: string,
        minutes: string,
        seconds: string
    };

    let make = t;
}

module ListPayload = {
    [@bs.deriving abstract]
    type t = {
        collection: string,
        node: Dom.htmlElement,
        newIndex: int,
        oldIndex: int
    };

    let make = t;
}

module MenuItem = {
    [@bs.deriving abstract]
    type t = {
        label: React.element,
        value: int
    };

    let make = t;
}