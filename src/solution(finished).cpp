// Phuc
bool LINEAR_LIST::InsertItem(LINEAR_LIST::LinearList& list, BOOK_TITLE::BookTitle* item, int position) {
	if (LINEAR_LIST::IsFull(list)) {
		std::cerr << std::format("[ERROR] LIST IS FULL CANNOT INSERT NEW ELEMENT!\nSUGGEST CREATE A NEW LIST WITH BIGGER SIZE!\n");
		exit(1);
	}

	if (position < 0 || position >= list.numberOfNode) {
		std::cerr << std::format("[ERROR] POSITION OUT OF RANGE! INSERT POSITION MUST IN RANGE 0 TO {}\n", LINEAR_LIST::MAX_SIZE - 1);
		exit(1);
	}

	//* Shift all item from position + 1 to the right by 1.
	for (int i = list.numberOfNode; i > position; --i) {
		list.nodes[i] = list.nodes[i - 1];
	}
	
	//* Insert new item into the list.
	list.nodes[position] = item;

	//* Increase the size of the list by one.
	++list.numberOfNode;

	return true;
}

bool LINEAR_LIST::InsertLast(LinearList& list, BOOK_TITLE::BookTitle* item) {
	if (LINEAR_LIST::IsFull(list)) {
		std::cerr << std::format("[ERROR] DANH BOOK DAU BOOK IS FULL!\n");
		exit(1);
	}

	list.nodes[list.numberOfNode] = item;
	++list.numberOfNode;

	return false;
}

bool LINEAR_LIST::InsertOrder(LinearList& list, BOOK_TITLE::BookTitle* item) {
	if (LINEAR_LIST::IsFull(list)) {
		exit(1);
	}

	int index = 0;
	for (; index < list.numberOfNode && item->GetTitle().compare(list.nodes[index]->GetTitle()) >= 0; ++index);

	for (int i = list.numberOfNode; i > index; --i) {
		list.nodes[i] = list.nodes[i - 1];
	}

	list.numberOfNode++;
	list.nodes[index] = item;

	return true;
}

void LINEAR_LIST::Traversal(const LinearList& list) {
	for (int i = 0; i < list.numberOfNode; ++i) {
		list.nodes[i]->Log();
	}
}

BOOK_TITLE::BookTitle* LINEAR_LIST::SearchByName(const LinearList& list, const std::string& titleName) {
	if (LINEAR_LIST::IsEmpty(list)) {
		return nullptr;
	}

	for (int i = 0; i < list.numberOfNode; ++i) {
		if (titleName.compare(list.nodes[i]->GetTitle()) == 0) {
			return list.nodes[i];
		}
	}

	return nullptr;
}

BOOK_TITLE::BookTitle* LINEAR_LIST::SearchByISBN(const LinearList& list, const std::string& isbn)
{
	for (int i = 0; i < list.numberOfNode; ++i)
	{
		if (isbn.compare(list.nodes[i]->GetISBN()) == 0)
		{
			return list.nodes[i];
		}
	}
	return nullptr;
}
//

// Phuc
bool LINKED_LIST::DeleteAt(Controller& controller, BOOK::Book item) {
	if (LINKED_LIST::IsEmpty(controller)) {
		return false;
	}

	if (controller.first->next == nullptr && controller.first->info.GetID().compare(item.GetID()) == 0) {
		delete controller.first;
		controller.first = nullptr;
		return true;
	}
	else if (controller.first->next == nullptr) {
		return false;
	}

	LINKED_LIST::Pointer p = controller.first;
	for (; p != nullptr && p->next != nullptr && p->next->info.GetID().compare(item.GetID()) != 0; p = p->next);

	if (p == nullptr) {
		return false;
	}

	LINKED_LIST::Pointer deleteNode = p->next;
	p->next = deleteNode->next;
	delete deleteNode;
	return true;
}
//



