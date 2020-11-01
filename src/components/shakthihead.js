import { Suspense } from 'react';
import {Canvas } from 'react-three-fiber';
import Shakthi from './Shakhead';

export default function ShakthiHead(props) {
    console.log(props.className)

    return (
        <div className={props.className} >
            <Canvas style={{height: '100%', width: '100%'}} camera={{position: [0, 0, 2]}}>
                <ambientLight intensity={3}/>
                <Suspense fallback={null}>
                    <Shakthi/>
                </Suspense>
            </Canvas>
        </div>
    )
}