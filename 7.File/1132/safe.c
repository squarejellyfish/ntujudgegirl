int safe(int array[5][5]) {

    int pos[2] = {0}, direction = -1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (array[i][j] == 2) {
                pos[0] = i;
                pos[1] = j;
            }
        }
    }

    int shortest = 6;
    // check up
    for (int i = pos[0] - 1; i >= 0; i--) {
        if (array[i][pos[1]] == 1) {
            shortest = pos[0] - i;
            direction = 1;
        }
    }

    // right
    for (int i = pos[1] + 1; i < 5; i++) {
        if (array[pos[0]][i] == 1) {
            int curr = i - pos[1];
            if (curr < shortest) {
                shortest = curr;
                direction = 2;
            }
        }
    }

    // down
    for (int i = pos[0] + 1; i < 5; i++) {
        if (array[i][pos[1]] == 1) {
            int curr = i - pos[0];
            if (curr < shortest) {
                shortest = curr;
                direction = 3;
            }
        }
    }

    // left
    for (int i = pos[1] - 1; i >= 0; i--) {
        if (array[pos[0]][i] == 1) {
            int curr = pos[1] - i;
            if (curr < shortest) {
                shortest = curr;
                direction = 4;
            }
        }
    }

    return direction;
}
