# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        answer = []

        def dfs(node, path):
            if not node.left and not node.right:
                if node == root:
                    answer.append(f"{node.val}")
                else:
                    answer.append(path + f"->{node.val}")
                return

            s = ''
            if node == root:
                s = str(node.val)
            else:
                s =f"->{node.val}"

            if node.left : dfs(node.left, path + s)
            if node.right : dfs(node.right, path + s)

        dfs(root, "")

        return answer    
        