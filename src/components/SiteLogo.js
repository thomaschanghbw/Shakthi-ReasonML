import Lottie from 'react-lottie';
import { useEffect } from 'react';
import animationData from './logo.json';

export default function Logo(props) {
    let animationConfig = {
        loop: false,
        autoplay: true,
        animationData: animationData // the path to the animation json
    };
    // useEffect(() => {
    //     let animObj = lottie.loadAnimation({
    //         container: this.animBox, // the dom element that will contain the animation
    //         renderer: 'svg',
    //         loop: true,
    //         autoplay: true,
    //         animationData: animationData // the path to the animation json
    //     });
    // });
    return (
        <>
        <div className={`${props.className}`}>
            <Lottie options={animationConfig} />
        </div>
        </>
    )
}

