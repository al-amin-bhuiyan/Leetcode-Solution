class Solution {
    private
    int maxPointsOnSameLine(vectorpairint, int& points) {
    int n = points.size();
    if (n = 2) return n;   Any two points are always collinear.

    int result = 0;

     Iterate over each point as an anchor point
    for (int i = 0; i  n; ++i) {
        unordered_mapstring, int slopeCount;   Map to store slope counts
        int samePoint = 0;   Count for duplicate points
        int vertical = 0;   Count for vertical lines

        for (int j = i + 1; j  n; ++j) {
            if (points[i] == points[j]) {
                samePoint++;   If the points are the same, increment duplicate count
            } else if (points[i].first == points[j].first) {
                vertical++;   If the points have the same x-coordinate, it's a vertical line
            } else {
                 Calculate the slope (dydx) and simplify it
                int dx = points[j].first - points[i].first;
                int dy = points[j].second - points[i].second;
                int g = gcd(dx, dy);   Get the GCD of dx and dy
                dx = g;   Simplify dx
                dy = g;   Simplify dy

                 Ensure the slope is always represented with a positive denominator
                if (dx  0) {
                    dx = -dx;
                    dy = -dy;
                }

                string slope = to_string(dy) +  + to_string(dx);   Create a unique key for the slope
                slopeCount[slope]++;   Increment the slope count
            }
        }

        result = max(result, vertical + samePoint + 1);   Consider vertical lines

         Find the maximum number of points with the same slope
        for (const auto& pair  slopeCount) {
            result = max(result, pair.second + samePoint + 1);   +1 for the anchor point
        }
    }

    return result;
}

public
    int maxPoints(vectorvectorint& points) {
          vectorpairint, int pointPairs;
    for (const auto& p  points) {
        pointPairs.push_back({p[0], p[1]});
    }
    
     Find the maximum number of points on the same line
    int result = maxPointsOnSameLine(pointPairs);
    return result;
    
        
    }
};