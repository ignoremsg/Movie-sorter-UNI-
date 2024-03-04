#include "MovieNode.h"

MovieNode* MovieNode::get_next()
{
	return next;
}

void MovieNode::set_next(MovieNode* obj)
{
	next = obj;
}

Movie MovieNode::get_movie()
{
	return payload;
}

std::ostream& MovieNode::write(std::ostream& fout) const
{
	payload.write(fout);
	return fout;
}

bool MovieNode::operator <(const MovieNode& rhs) const
{
	bool fits = false;
	std::string fWord = payload.title; 
	std::string sWord = rhs.payload.title; 
	if (fWord.at(0) < sWord.at(0))
		fits = true;
	return fits;
}

MovieNode::~MovieNode()
{
	next = nullptr;
}
