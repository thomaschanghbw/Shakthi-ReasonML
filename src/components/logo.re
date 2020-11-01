module Logo = {
    [@bs.module "src/components/SiteLogo"]
    [@react.component]
    external make: (~className: string=?) => React.element = "default";
}