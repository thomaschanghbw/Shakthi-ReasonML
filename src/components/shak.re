module Head = {
    [@bs.module "src/components/shakthihead"]
    [@react.component]
    external make: (~className: string=?) => React.element = "default";
}
