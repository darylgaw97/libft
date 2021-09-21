t_list *ft_lstnew(void *content)
{
    t_list *temp;

    if (content == NULL)
        return (NULL);
    if(!(temp = malloc(sizeof(t_list))))
        return (NULL);
    temp->content = content;
    temp->next = NULL;
    return (temp);
}