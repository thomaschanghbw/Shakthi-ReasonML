/*
auto-generated by: https://github.com/pmndrs/gltfjsx
*/
import React, { useRef } from 'react'
import {useLoader, useFrame} from 'react-three-fiber'
import { GLTFLoader } from 'three/examples/jsm/loaders/GLTFLoader'

let rotationMultiplier = -1;

function computeRotation(curRotation) {
  if (rotationMultiplier == -1 && curRotation < -Math.PI / 4) {
    rotationMultiplier = 1;
  } else if (rotationMultiplier == 1 && curRotation > 0) {
    rotationMultiplier = -1;
  }
  return rotationMultiplier * 0.005;
}

export default function Model(props) {
  const mesh = useRef()

  // Rotate mesh every frame, this is outside of React without overhead
  useFrame(() => (mesh.current.rotation.y += computeRotation(mesh.current.rotation.y)))

  const group = useRef()
  const { nodes, materials } = useLoader(GLTFLoader, '/shakthi.glb')
  return (
    <group ref={group} {...props}>
      <mesh ref={mesh} material={materials.kt_facebuilder_material} geometry={nodes.FaceBuilderHead.geometry} />
    </group>
  )
}
