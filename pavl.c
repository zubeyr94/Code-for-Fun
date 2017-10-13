#include "pavl.h"
#include "math.h"
pavl::pavl()
{
	root = NULL;
}

pavl::~pavl()
{
}

bool pavl::insert(sNode *node, int key, string value)
{
	if(!node)
	{
		root = new sNode();
		sNode->key = key;
		sNode->value = value;
		sNode->leftC = NULL;
		sNode->rightC = NULL;
	}

	sNode *current = root;

}

int pavl::getHeight(sNode *node)
{
	if(node)
	{
		return 1 + std::max(getHeight(node->left),getHeight(node->right));
	}

	return 0;
}

