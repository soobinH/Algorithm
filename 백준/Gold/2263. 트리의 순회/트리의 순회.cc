#include <iostream>
using namespace std;

int index[100001];
int inorder[100001];
int postorder[100001];

void preorder(int in_start, int in_end, int post_start, int post_end) // 전위 순회 함수
{
	if (in_start > in_end || post_start > post_end)
		return;

	int root = index[postorder[post_end]]; // 루트 저장(후위 순회 마지막: 루트)
	int left = root - in_start; // 왼쪽 저장
	int right = in_end - root; // 오른쪽 저장
	cout << inorder[root] << " "; // 루트 값 출력

	preorder(in_start, root - 1, post_start, post_start + left - 1);
	preorder(root + 1, in_end, post_start + left, post_end - 1);
}

int main(void)
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> inorder[i];
		index[inorder[i]] = i; // 전위 순회 인덱스 저장
	}

	for (int i = 1; i <= n; i++)
	{
		cin >> postorder[i]; // 후위 순회 저장
	}

	preorder(1, n, 1, n);
	return 0;

}