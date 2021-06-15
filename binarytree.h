typedef struct node {
	int data;
	struct node* parent;
	struct node* left;
  struct node* right;
} node_t;

void add(int data);
void del(int data);
int count();
void list();
void empty();

