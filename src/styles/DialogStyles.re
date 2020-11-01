open Css;

let linearAnimation = keyframes([
  (0, [ backgroundPosition(`hv(`zero, `zero))]),
  (100, [ backgroundPosition(`hv(px(200), `zero))])
]);

let buttonAnimation = style([
  before([
    contentRule(`text("")),
    display(`block),
    height(pct(100.)),
    width(pct(100.)),
    borderRadius(px(3)),
    transform(scale(1.02, 1.08)), 
    position(absolute),
    background(linearGradient(
            deg(90.),
            [(zero, rgb(0, 0, 255)), (px(100), rgb(255, 0, 0))],
          )),
    backgroundPosition(`hv(px(55), px(0))),
    top(zero),
    animationDuration(1),
    animationIterationCount(infinite),
    animationName(linearAnimation),
    left(zero),
    zIndex(-1),
    backgroundColor(hex("f00")),
    boxSizing(borderBox)
  ])
]);


// .biliboard {
// 	width: 200px;
// 	padding: 20px;
// 	text-align: center;
// 	position: relative;
// 	background: #fff;
// 	color: #333;
// 	font: 13px open, tahoma;
// }
// .biliboard:before {
// 	content: '';
// 	display: block;
// 	height: 100%;
// 	width: 100%;
// 	border-radius: 3px;
// 	transform: scale( 1.02, 1.08 );
// 	position: absolute;
// 	background: #f00;
// 	background: linear-gradient( 90deg, #fafafa, #fafafa, #1D8EF7, #fafafa, #fafafa );
// 	background-position: 55px 0;
// 	top: 0;
// 	animation: linear 1s infinite linear;
// 	left: 0;
// 	z-index: -1;
// }