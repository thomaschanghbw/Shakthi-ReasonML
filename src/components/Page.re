[@react.component]
let make = (~children) => {
    <div className="h-screen w-full bg-black overflow-y-hidden overflow-x-hidden">
        children
    </div>
 
}

let default = make;
