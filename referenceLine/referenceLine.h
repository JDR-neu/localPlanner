/**
 * Created by ustb on 19-7-12.
 input:way-points
 output:coefficients of the arc-length parameterized reference line
 x=a[0]+a[1]*s + a[2]*s^2 + a[3]*s^3;
 y=b[0]+b[1]*s + b[2]*s^2 + b[3]*s^3;
 d_x = a_vec[1] + 2 * a_vec[2] * s + 3 * a_vec[3] * s ** 2
 d_y = b_vec[1] + 2 * b_vec[2] * s + 3 * b_vec[3] * s ** 2
 */

//

#ifndef LATTICEPLANNER_REFERENCELINE_H
#define LATTICEPLANNER_REFERENCELINE_H

#include "../referenceLine/cubicSpline.h"
#include <iostream>

namespace referenceLine{

    /**
     * calculate the efficients of reference line
     * [vector_a, vector_b, s]
     *
     * @return
     */
    std::vector<std::vector<Vec_d > > refLine_coefficients();


    /**
     * reference line is parameterized by the arc length
     */
    std::vector<std::vector<double> > arcLengthRefLine(std::vector<double> pose, std::vector<double> nextPose,
                                                       double s0, double sf);


    /**
     * select appropriate step between way-points in the reference line
     */
    std::vector<std::vector<Vec_d > > SparseWayPoints(Vec_d r_x, Vec_d r_y, Vec_d r_heading, Vec_d r_s);

} //namespace referenceLine

#endif //LATTICEPLANNER_REFERENCELINE_H
