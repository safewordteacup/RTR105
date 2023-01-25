set terminal png size 1200,1200
set output 'functionplot.png'

set style line 1 lt -1 lc rgb "black" lw 1
set style line 2 lt 0 lc rgb "gray" lw 0.5

set key box vertical maxcols 1 spacing 3 opaque left top
set samples 1000, 1000
set mytics 4
set mxtics 4
set grid mytics ytics ls 1, ls 2 
set grid mxtics xtics ls 1, ls 2
set title "(1+x)*exp(x) and taylor series" 
set title  font "0,20" textcolor lt -1 norotate

function(x) = (1+x)*exp(x)
tsw1a(x) = (1+x)
tsw2a(x) = tsw1a(x) + (1+x) * ((x**1)/(1))
tsw3a(x) = tsw2a(x) + (1+x) * ((x**2)/(2*1))
tsw4a(x) = tsw3a(x) + (1+x) * ((x**3)/(3*2*1))
tsw5a(x) = tsw4a(x) + (1+x) * ((x**4)/(4*3*2*1))
tsw6a(x) = tsw5a(x) + (1+x) * ((x**5)/(5*4*3*2*1))
tsw7a(x) = tsw6a(x) + (1+x) * ((x**6)/(6*5*4*3*2*1))
plot [-3:3] tsw1a(x) lw 1.5, tsw2a(x) lw 1.5, tsw3a(x) lw 1.5, tsw4a(x) lw 1.5, tsw5a(x) lw 1.5, tsw6a(x) lw 1.5, tsw7a(x) lw 1.5, function(x) lw 2.5
