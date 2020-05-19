/*
Your program must print:
• The velocity vector of the ball,
• The coordinates of the ball after a given amount of time,
• The angle at which the ball will hit the bat (if it will indeed hit the bat, at anytime from t = 0).
 
./101pong x0 y0 z0 x1 y1 z1 n

DESCRIPTION
x0 ball abscissa at time t - 1
y0 ball ordinate at time t - 1
z0 ball altitude at time t - 1
x1 ball abscissa at time t
y1 ball ordinate at time t
z1 ball altitude at time t
n time shift (greater than or equal to zero, integer)
*/
/*   The incidence angle should be between 0 and 90 degrees
     Mind the float numbers precision!
./101pong 1 3 5 7 9 -2 4
The velocity vector of the ball is:
(6.00, 6.00, -7.00)
At time t + 4, ball coordinates will be:
(31.00, 33.00, -30.00)
The ball won’t reach the bat.

./101pong 1.1 3 5 -7 9 2 4
The velocity vector of the ball is:
(-8.10, 6.00, -3.00)
At time t + 4, ball coordinates will be:
(-39.40, 33.00, -10.00)
The incidence angle is:
16.57 degrees

*/
