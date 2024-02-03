/*
 * П -> В К
 * К -> В П
 * В -> П К
 * П В К
 *         П                     В                        К
 * 0. |    x     |               y                 |      z       |
 *    +----------+---------------------------------|--------------|
 * 1. |x-y-z     |              2y                 |      2z      |
 *    +----------+---------------------------------+--------------+
 * 2. |2*(x-y-z) |              4y                 | 2z-(x-y-z)-2y|
 *    +----------+---------------------------------+--------------+
 * 3. |4*(x-y-z) | 4y-(2z-(x-y-z)-2y)-(2*(x-y-z))  |  4*(2z-x-y)  |
 *    +----------+---------------------------------+--------------+
 *
 *    4x-4y-4z = 3y-5z-x = 8z-4x-4y
 *
 *    5x-(21z/2)+z = 0
 *    ----
 *    (1). y = 3z/2
 *    (2). x = 19z/10 
 *
/
