def time_difference(a, b):
    h1, m1 = map(int, a.split(':'))
    h2, m2 = map(int, b.split(':'))
    t1 = h1 * 60 + m1
    t2 = h2 * 60 + m2

    diff = abs(t2 - t1)
    return min(diff, 1440 - diff)

class Solution(object):
    def findMinDifference(self, timePoints):
        sorted_times = sorted(timePoints, key=lambda t: list(map(int, t.split(':'))))
        min_diff = time_difference(sorted_times[0], sorted_times[-1])
        for i in range(len(sorted_times) - 1):
            diff = time_difference(sorted_times[i], sorted_times[i + 1])
            min_diff = min(min_diff, diff)

        return min_diff


