set_difference(camera[i].begin(), camera[i].end(), before.begin(),before.end(), insert_iterator<set<int>>(temp,temp.begin()));
            camera[i]=temp;