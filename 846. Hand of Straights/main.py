class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        if len(hand) % groupSize != 0:
            return False

        dc = {}
        for card in hand:
            if card in dc:
                dc[card] += 1
            else:
                dc[card] = 1

        idk = sorted(dc.keys())

        for i in idk:
            if dc[i] > 0:
                cnt = dc[i]
                for j in range(groupSize):
                    if i + j not in dc or dc[i + j] < cnt:
                        return False
                    dc[i + j] -= cnt

        return True
