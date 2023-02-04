#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], c[m];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> c[i];
        }

        // Count the number of guests for each dish type
        int dish_count[n + 1] = { 0 };
        for (int i = 0; i < n; i++) {
            dish_count[a[i]]++;
        }

        // Sort tables in decreasing order of capacity
        sort(c, c + m, greater<int>());

        // Assign guests to tables
        int guests_assigned = 0;
        int table_index = 0;
        for (int i = 1; i <= n; i++) {
            while (dish_count[i] > 0 && table_index < m) {
                guests_assigned += min(dish_count[i], c[table_index]);
                dish_count[i] -= c[table_index];
                table_index++;
            }
        }

        cout << guests_assigned << endl;
    }
    return 0;
}

