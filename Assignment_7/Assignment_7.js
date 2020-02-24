var x =parseInt(Math.random()*10000);
var a=[];
a[0]=1;
a[1]=1;
var b=[];
if(x<2){
    b[0]=1;
    b[1]=1;
}
for(var i=0,j=2;a[i+1]+a[i]<=x+10000;i++){
    a[i+2]=a[i+1]+a[i];
    if (a[i+2]>=x){
        b[j]=a[i+2];
        j++;
    }
}
console.log('x=',x);
b.map(function (e) {
    console.log(e);
})