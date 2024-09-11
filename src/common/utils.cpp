#include <wall_follower/common/utils.h>

std::vector<float> crossProduct(const std::vector<float>& v1, const std::vector<float>& v2)
{
    std::vector<float> res;
    /**
     * TODO: (P1.2) Take the cross product between v1 and v2 and store the
     * result in res. v1, v2, and res should be vectors with 3 elements, which
     * correspond to the vector components [x, y, z].
     **/
    return res;
}

int findMinDist(const std::vector<float> &ranges)
{
    // *** Task 2: Implement findMinDist logic *** //
    // TODO: Add logic so that findMinDist returns the correct index.
    // HINT: Remember to ignore any ranges that are zero!

    int indx = -1;
    float minimum_rng = ranges[indx];

    for (int i = 0; i < ranges.size(); ++i)
    {
        if (ranges[i] != 0 && ranges[i] < minimum_rng)
        {
            indx = minimum_rng;
        }
    }

    return indx;

    // *** End Student Code *** //
}