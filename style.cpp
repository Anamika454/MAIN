{

margin:
    0;
    padding;
    0;
    font - family : 'poppins', sans - serif;
    box - sizing;
    border - box;
}
body
{
background:
    "black";
    color = "white";
}

.header
{
width:
    100 % ;
height:
    100vh;
    background - image : liner - gradient(rgba(0, 0, 0, 0.7), rgba(0, 0, 0, 0.7)), url("header-image.png");
    background - size : cover;

    background - position : center;
padding:
    10px 8 % ;
position:
    relative;
}
nav
{
display:
    flex;
    align - items : center;
    justify - content : space - between;
padding:
    10px 0;
}
.logo
{
width:
    150px;
cursor:
    pointer;
}
nav button
{
border:
    0;
outline:
    0;
background:
    "red";
color:
    "white";
padding:
    7px 20px;
    border - radius : 4px;
    margin - left : 10px;
cursor:
    pointer;
}
.language - btn
{
display:
    inline - flex;
    align - item : center;
background:
    transparent;
border:
    1px solid "white";
padding:
    7px 10px;
}
.language - btn img
{
    width;
    10px;
    margin - left : 10px;
}
.header - content
{
position:
    absolute;
top:
    50 % ;
left:
    50 % ;
transform:
    translate(-50 %, -50 %);
    text - align : center;
    margin - top : 100px;
}
.header - content h1
{
    font - size : 60px;
    line - height : 70px;
    font - weight : 600;
    max - width : 650px;
}
.header - content h3
{
    font - weight : 400;
    margin - bottom : 20px;
}
.email - signup
{
background:
    "white";
    border - radius : 4px;
display:
    flex;
    align - items : center;
    margin - top : 30px;
overflow:
    hiddden;
}
.email - signup input
{
flex:
    1;
border:
    0;
outline:
    0;
    margin - left : 20px;
}
.email - signup button
{
background:
    "red";
border:
    0;
outline:
    0;
color:
    "black";
    font - size : 16px;
cursor:
    pointer;
padding:
    15px 30px;
}
.features
{
padding:
    50px 12 % ;
    font - size : 22px;
}
.row
{
display:
    flex;
width:
    100 % ;
    align - items : center;
    flex - wrap : wrap;
padding:
    50px 0;
}
.text - col
{
    flex - basis : 50 % ;
    margin - bottom : 20px;
}
.img - col
{
    flex - basis : 50 % ;
    margin - bottom : 20px;
}
.img - col img
{
display:
    block;
    width;
    90 % ;
margin:
    auto;
}
.features h2
{
    font size : 50px;
    font - weight : 600;
    margin - bottom : 20px;
}
.faq
{
padding:
    10px 12 % ;
    text - align : center;
    font - size : 18px;
}
.faq h2
{
    font - weight : 500;
    font - size : 40px;
}
.accordion
{
margin:
    60px;
width:
    100 % ;
    max - width : 750px;
}
.accordion li
{
    list - style : none;
width:
    100 % ;
paddin:
    5px;
}
.accordion li label
{
display:
    flex;
    align - items : center;
padding:
    20px;
    font - size : 18px;
    font - weight : 500;
background:
    "greay";
    margin - bottom : 2px;
cursor:
    pointer;
position:
    relative;
}
label::after
{
content:
    '+';
    font - size : 34px;
position:
    absolute;
right:
    20px;
transition:
    transform 0.5s;
}
input[type = "radio"]
{
display:
    none;
}
.accordion.content
{
background:
# 303030;
    text - align : left;
padding:
    0 20px;
    max - height : 0;
overflow:
    hidden;
transition:
    max - height 0.5s, padding 0.5s;
}
.accordion input[type = "radio"] : checked + label +.content
{
    max - height : 600px;
padding:
    30px 20px;
}
.accordion input[type = "radio"] : checked + label::after
{
transform:
    rotate(135deg);
}
.faq.email - signup
{
    max - weight : 600px;
margin:
    20px auto 60px;
}
.faq small
{
    font - size : 13px;
}
/*--------------footer-------------*/
.footer
{
padding:
    50px 15 % 10px;
    border - top : 6px solid #333;
color:
# 777;
}
.footer h2
{
    font - size : 18px;
    font - weight : 400;
    margin - bottom;
    30px;
}
.footer.col
{
    flex - basis : 25 % ;
    flex - grow : 1;
    margin - bottom : 20px;
}
.footer.col a
{
display:
    block;
    text - decoration : none;
color:
# 777;
    font - size : 14px;
    margin - bottom : 10px;
}
.footer.row
{
    align - items : flex - start;
padding:
    10px 0;
}
.footer.language - btn
{
color:
#fff;
padding:
    10px 20px;
    border - radius : 3px;
}
.copyright - txt
{
    font - size : 14px;
    margin - top : 20px;
    margin - bottom : 10px;
}

/*----------media-queries-for-small-screen---------*/
@media only screen and (max - width : 600px)
{
    .logo
    {
    width:
        100px;
    }
    nav button
    {
    padding:
        5px 10px;
    }
    nav.language - btn
    {
    padding:
        4px 8px;
    }
    .header - content
    {
    position:
        unset;
    transform:
        none;
        padding - top : 150px;
    }
    .header - content h1
    {
        font - size : 30px;
    }
    .email - signuo button
    {
        font - size : 12px;
    padding:
        10px 15px;
    }
    .text - col, .img - col
    {
        flex - basis : 100 % ;
    }
    .features h2
    {
        font - size : 30px;
    }
    .features p
    {
        font - size : 15px;
    }
    .row : nth - child(2), .row : nth - child(4)
    {
        flex - direction : column - reverse;
    }
    .features.row
    {
    padding:
        10px 0;
    }
    .faq h2
    {
        font - size : 20px;
    }
    .accordion.content
    {
        font - size : 14px;
    }
    .accordion li label
    {
    padding:
        10px;
        font - size : 14px;
    }
    label::after
    {
        font - size : 22px;
    }
}