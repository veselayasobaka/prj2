void join(const std::vector<int> &from, std::vector<int> &to)
{
    std::vector<int> temp (to);
    to.resize(from.size()+temp.size(), 0);                                                                       //complement vector with zeros
    std::vector<int>::const_iterator it_from  = from.begin();
    std::vector<int>::iterator it_temp = temp.begin(), it_to = to.begin();
    while (it_from != from.end() && it_temp != temp.end())                                //until the end of one of vectors
    {
        if (*it_from < *it_temp)
        {
            *it_to = *it_from;
            ++it_from, ++it_to;
        }
        else
        {
            *it_to = *it_temp;
            ++it_temp, ++it_to;
        }
    }
    if (it_from == from.end())                                                                                                //this part copies the rest of the last vector
    {
        std::copy(it_temp, temp.end(), it_to);
    }
    else
    {
        std::copy(it_from, from.end(), it_to);
    }
}
