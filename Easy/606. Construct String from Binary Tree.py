# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def tree2str(self, root: Optional[TreeNode]) -> str:
        def treestr(root):
            if not root:
                return ''
            if not root.left: 
                left = ''
                if root.right: left = '()'
            else: left = f'({treestr(root.left)})'
            if not root.right: right = ''
            else: right = f'({treestr(root.right)})'

            x = f'{root.val}{left}{right}'
            return x
            
        return treestr(root)