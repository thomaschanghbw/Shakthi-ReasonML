[@react.component]
let make = (~dialog: string, ~buttonText: string, ~onButtonPressed) => {
    <div className="p-6 w-56 h-auto bg-gray-600  space-y-6 relative box-border">
        <div>{ReasonReact.string(dialog)}</div> 
        <button className="mx-auto my-0 block" onClick=onButtonPressed>{ReasonReact.string(buttonText)}</button>
    </div>

}

let default = make;

