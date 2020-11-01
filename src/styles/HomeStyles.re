open Css;

let flickerKeyframes = keyframes([
  (0, [opacity(0.)]),
  (10, [opacity(0.1)]),
  (20, [opacity(0.)]),
  (30, [opacity(0.)]),
  (40, [opacity(0.)]),
  (50, [opacity(0.5), left(px(6))]),
  (60, [opacity(0.)]),
  (70, [opacity(0.)]),
  (80, [opacity(0.3)]),
  (90, [opacity(0.)]),
  (100, [opacity(0.6), left(px(-2))]),
]); 

let flickerAnimation = style([ 
    animationName(flickerKeyframes),
    animationDuration(10), 
    animationIterationCount(infinite),
    animationTimingFunction(linear)
])

let flickerKeyframes1 = keyframes([
  (0, [opacity(0.)]),
  (10, [opacity(0.1)]),
  (20, [opacity(0.)]),
  (30, [opacity(0.)]),
  (40, [opacity(0.)]),
  (50, [opacity(0.5), right(px(6))]),
  (60, [opacity(0.)]), 
  (70, [opacity(0.)]),
  (80, [opacity(0.3)]),
  (90, [opacity(0.)]),
  (100, [opacity(0.6), right(px(2))]),
]);  
// let flickerKeyframes1 = keyframes([
//   (0, [opacity(0.)]),
//   (10, [opacity(0.)]), 
//   (20, [opacity(0.)]), 
//   (30, [opacity(0.5), right(px(6))]),
//   (70, [opacity(0.)]),
//   (90, [opacity(0.3)]), 
//   (100, [opacity(0.6), right(px(-2))]),
// ]); 

let flickerAnimation1 = style([
    animationName(flickerKeyframes1),
    animationDuration(1000),
    animationIterationCount(infinite),
    animationTimingFunction(linear)
])
