class ATM:

    def __init__(self):
        self.bills = [0, 0, 0, 0, 0]
        self.amounts = [20, 50, 100, 200, 500]

    def deposit(self, banknotesCount: List[int]) -> None:
        for i, x in enumerate(banknotesCount):
            self.bills[i] += x

    def withdraw(self, amount: int) -> List[int]:
        output = [0]*5

        for i in range(4,-1,-1):
            can = int(amount / self.amounts[i])
            have = self.bills[i]
            taking = have if can >= have else can

            amount -= (taking*self.amounts[i])
            self.bills[i] -= taking
            output[i] += taking

        if amount != 0:
            for i in range(5): self.bills[i] += output[i]
            return [-1]
        return output
        


# Your ATM object will be instantiated and called as such:
# obj = ATM()
# obj.deposit(banknotesCount)
# param_2 = obj.withdraw(amount)