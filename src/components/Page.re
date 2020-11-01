[@react.component]
let make = (~children) => {
    <div className="h-screen w-full bg-black">
        children
    </div>

}

let default = make;
