import { Suspense } from 'react';
import {Canvas } from 'react-three-fiber';
// import Logo from 'src/components/SiteLogo';
let Logo = require("src/components/SiteLogo").default

export default function ShakthiHead() {
    return (
        <div className="bg-black w-full h-view">
            <Logo/>
        </div>
    )
}