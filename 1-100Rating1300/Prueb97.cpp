
    vector<pair<char, int>> up;
    FMAP(gr, it)
        up.pb(it->S);
    sort(all(up), cmp);
    EACH(up) {
        if(k == 0)
            break;
        if(i.S <= k) {
            sum += (i.S * i.S);
            k -= i.S;
        }else {
            sum += k * k;
        }
    }
