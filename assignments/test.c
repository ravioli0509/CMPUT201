

    int s1_idx = 0;
    int repeats = 0;

    for (int i = 0; i < s2_length; i++) {
        if (s2[i] == s1[s1_idx]) {
            s1_idx++;
        }   
        
        else {s1_idx = 0;}

        if (s1_idx > s1_length-1) {
            s1_idx = 0;
            repeats++;
        }
    }

    s1_length = sizeof(s1[1000]);
    s2_length = sizeof(s2[1000]);
    printf("\n%d and %d\n", s1[1000], s2[1000]);
    printf("%d and %d\n", s1_length, s2_length);
    printf("repats are : %d", repeats);
    return 0;
}

