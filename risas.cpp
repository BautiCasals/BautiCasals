int risaMasLarga(vector<char> s) {
    int largo = 0;
    int risas = 0;
    int i = 0;
    while(i<s.size()) {
        if (risas == 0) {
            if (s[i] == 'a' || s[i] == 'h') {
                risas++;
            }
        } else {
            if (s[i] == 'a') {
                if (s[i-1] == 'a') {
                    largo = risas;
                    risas = 1;
                } else if (s[i-1] == 'h') {
                    risas++;
                    largo = risas;
                }
            } else if (s[i] == 'h') {
                if (s[i-1] == 'h') {
                    largo = risas;
                    risas = 1;
                } else if (s[i-1] == 'a') {
                    risas++;
                    largo = risas;
                }
            } else {
                largo = risas;
                risas = 0;
            }
        }
        i++;
    }
    return largo;
}
