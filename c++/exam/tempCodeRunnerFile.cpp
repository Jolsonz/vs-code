while(element.size()<9){
    //     set<int> max_set , _temp;
    //     int max_num;
    //     for(int i=0;i<n;i++){
    //         set_intersection(element.begin(), element.end(), _set[i].begin(), _set[i].end(), insert_iterator<set<int>>(_temp, _temp.begin()));
    //         if(_temp.size()>max_set.size()){
    //             max_set=_temp;
    //             max_num=i;
    //         }
    //     }
    //     //最后让_set-_temp即可
    //     ans.push_back(max_num);//把相应集合的编号放进去。
    //     _set[max_num].clear();//已经用过这个集合了，清空这个集合。
    //     set_difference(element.begin(), element.end(), _temp.begin(), _temp.end(), insert_iterator<set<int>>(element,element.begin()));//结果放在_Set里
    // }
    // cout<<ans.size()<<endl;