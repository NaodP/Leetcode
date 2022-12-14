class UndergroundSystem:

    def __init__(self):
        self.ongoingTrips = {}
        self.average = {}

    def checkIn(self, id: int, stationName: str, t: int) -> None:
        self.ongoingTrips[id] = (stationName, t)

    def checkOut(self, id: int, stationName: str, t: int) -> None:
        finalTrip = f'{self.ongoingTrips[id][0]} to {stationName}'
        time = t - self.ongoingTrips[id][1]

        if finalTrip not in self.average:
            self.average[finalTrip] = (0,0)
        avg, tot = self.average[finalTrip]

        self.average[finalTrip] = (((avg * tot) + time) / (tot+1), tot+1)
        self.ongoingTrips.pop(id)
        
    def getAverageTime(self, startStation: str, endStation: str) -> float:
        return self.average[f'{startStation} to {endStation}'][0]
        


# Your UndergroundSystem object will be instantiated and called as such:
# obj = UndergroundSystem()
# obj.checkIn(id,stationName,t)
# obj.checkOut(id,stationName,t)
# param_3 = obj.getAverageTime(startStation,endStation)