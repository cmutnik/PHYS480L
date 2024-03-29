# Gnuplot script file for plotting data
# 

set terminal png nocrop enhanced size 900,700 font 'arial,18'
#set grid
set out 'calib.png'

set multiplot
set size 1,1
set origin 0,0 #origin of plot
set title "Calibration Curve"
set ylabel "Time Interval (ns)"
set xlabel "Channel Number"
#set xr [-5:225]
#set yr [0:1000]
#set yr [-500000:8000000]
set autoscale y
set autoscale x
#set logscale x
#set logscale y
set key bottom right
set bar small
set grid
#f(x) = m*x+b
#g(x) = q*x+c
#h(x) = j*x+d
#f(x) = a*x**2 + b*x + c          # define a quadratic function
#fit f(x) 'zat.dat' via a,b,c    # compute the coefficients a,b,c

#fit f(x) "sol.dat" using 4:5 via m,b
#fit g(x) "ams.dat" using 6:7 via q,c
#fit h(x) "ams.dat" using 1:5 via j,d

f1(x)=a1*x+b1
fit f1(x) "calib.dat" u 1:2 via a1, b1
#f2(x)=a2*x+b2
#fit f2(x) "sol.dat" u 6:7 via a2, b2


plot  "calib.dat" using 1:2 title '' lc rgb "blue" lw 3 with points,\
		f1(x)
      
#=============mini plot=============      
 
unset multiplot