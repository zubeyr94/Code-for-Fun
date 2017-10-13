#include <string>

class pavl
{
	pavl();
	~pavl();
	struct sNode
	{
		std::string value;
		int key;
		sNode *left;
		sNode *right;
	};

private:
	sNode *root;
	int getHeight(sNode *node);
};
