open Css;
open HomeStyles;

[@react.component]
let make = () => {
    <>
    // <div style=(ReactDOM.Style.make(~fontFamily="Courier New", ())) className=merge(["p-6 w-56 h-8 absolute left-0 text-gray-200 text-5xl", flickerAnimation])>
    //     {ReasonReact.string("What have I become?")}
    // </div> 

    <div className="flex flex-col mx-auto w-px-500 "> 
        <Logo.Logo className="w-64 m-auto"/>   
         
        <div className="w-full m-auto relative ">   
            <img src="/vman.png" className="w-full"/> 
            <Shak.Head className=Css.merge(["absolute top-0", Css.style([right(pct(50.)), transform(translateX(pct(50.))) , width(pct(23.)), height(pct(23.))])])/> 
        </div>

    </div> 

    <div style=(ReactDOM.Style.make(~fontFamily="Courier New", ())) className=merge(["p-6 w-56 h-8 absolute right-0 text-gray-200 text-2xl", flickerAnimation1])>
        {ReasonReact.string("We're all puppets, Laurie. I'm just a puppet who can see the strings.")}
    </div> 
    </>

}
 
let default = make; 