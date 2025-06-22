# Sentiment Analysis using Hash Table (C++)

This project implements a simple movie review sentiment analysis tool using a hash table in C++. The program reads a dataset of movie reviews, where each word in a review is assigned a score based on the review's sentiment. A hash table maps words to their average sentiment score. The user can input new reviews, and the program analyzes the average sentiment based on known words.

This project was completed as part of a data structures and algorithms course.

## Technologies
- C++
- Standard Template Library (STL)

## Key concepts
- Hash table with separate chaining
- Average score tracking for words
- Basic text processing
- Simple sentiment classification

## How to compile and run

### Compile
```
g++ main.cpp HashTable.cpp WordEntry.cpp -o sentiment_analysis
```

### Run
```
./sentiment_analysis
```

The program will:
- Read reviews from `movieReviews.txt`
- Allow the user to enter new reviews
- Print the average sentiment and a sentiment category

## What I learned
- Designing and implementing a hash table using separate chaining
- Calculating and storing word sentiment averages
- Processing text input and handling user reviews
- Building a basic sentiment classifier with C++
