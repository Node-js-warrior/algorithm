#include <cstdio>
#include <vector>
#include <algorithm>
#include <stack>

int student[102];

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
	scanf("%d", &student[i]);
    }

    stack<int> temp;
    stack<int> res;

    /* initialize */
    res.push(1);

    for (int j=2; j<=n; j++) {
	int pop_size = (res.size() - student[j]);
	for (int k=0; k<pop_size; k++) {
	    int num = res.top();
	    res.pop();
	    temp.push(num);
	}
	res.push(j);
	while (!temp.empty()) {
	    int temp_num = temp.top();
	    temp.pop();
	    res.push(temp_num);
	}
    }

    while (!res.empty()) {
	int res_num = res.top();
	res.pop();
	printf("%d ", res_num);
    }
    return 0;
}
