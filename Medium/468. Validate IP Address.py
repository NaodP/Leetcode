# Naod Philemon
# 01/06/2023

class Solution:
    def checkIPv4(self, queryIP):
        tempIP = queryIP.split('.')
        if len(tempIP) != 4: return False

        for section in tempIP:
            if len(section) == 0: return False
            if section[0] == '0' and len(section) > 1: return False
            for let in section:
                if not let.isdigit(): return False
            if int(section) > 255 or int(section) < 0: return False
        
        return True

    def checkIPv6(self, queryIP):
        tempIP = queryIP.split(':')
        if len(tempIP) != 8: return False

        for section in tempIP:
            if len(section) > 4 or len(section) < 1: return False
            for let in section:
                if let.isdigit(): continue
                if ord(let) > 96 and ord(let) < 103: continue
                if ord(let) > 64 and ord(let) < 71: continue
                return False

        return True


    def validIPAddress(self, queryIP: str) -> str:
        if self.checkIPv4(queryIP): return 'IPv4'
        if self.checkIPv6(queryIP): return 'IPv6'
        return 'Neither'
