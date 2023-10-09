#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct Node {
	char data;
	struct Node* left, * right;
} Node;

Node*malloc_node(char value) // 노드 생성
{
	Node* node;
	node = (Node*)malloc(sizeof(Node));
	node->data = value;
	node->left = NULL;
	node->right = NULL;

	return node;
}

Node* search_node(char data, Node* root) // 부모 노드 찾기
{
	if (root != NULL)
	{
		if (root->data == data) // 해당 노드가 루트 노드일 경우
			return root;

		else
		{
			Node* search = search_node(data, root->left); // 좌측 노드부터 탐색
			if (search != NULL) // 좌측 노드 중 해당 노드가 있을 경우
				return search; // 리턴

			else // 좌측 노드 중 해당 노드가 없을 경우
				return search_node(data, root->right); // 우측 노드 탐색
		}
	}

	return NULL;
}

void insert_node(char data, char left, char right, Node* root) // 노드 삽입
{
	root->data = data;
	if (left != '.')
		root->left = malloc_node(left);

	if (right != '.')
		root->right = malloc_node(right);
}


void inorder(Node* root) // 중위 순회
{
	if (root == NULL)
		return;
	inorder(root->left);
	printf("%c", root->data);
	inorder(root->right);
}

void preorder(Node* root) // 전위 순회
{
	if (root == NULL)
		return;
	printf("%c", root->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(Node* root) // 후위 순회
{
	if (root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%c", root->data);
}

int main(void)
{
	Node* mainTree  = malloc_node('A'); // 메인 트리(루트 노드)
	Node* searchTree; // 루트 노드 이후 삽입

	int nodes;
	char data, left, right;

	scanf("%d", &nodes);
	getchar(); // 엔터 삽입 방지

	for (int i = 0; i < nodes; i++)
	{
		scanf("%c %c %c", &data, & left, & right);
		getchar(); // 엔터 삽입 방지

		searchTree = search_node(data, mainTree);

		if (searchTree != NULL)
		{
			insert_node(data, left, right, searchTree);
		}

		else
			insert_node(data, left, right, mainTree);
	}

	preorder(mainTree);
	printf("\n");
	inorder(mainTree);
	printf("\n");
	postorder(mainTree);
	return 0;

}

