# [College Predictor Based on Rank](#college-predictor-based-on-rank)
***

[![GitHub license](https://img.shields.io/github/license/deepikagandla7456/College-Predictor-Based-on-Rank)](LICENSE)
[![GitHub issues](https://img.shields.io/github/issues/deepikagandla7456/College-Predictor-Based-on-Rank)]()
[![GitHub contributors](https://img.shields.io/github/contributors/deepikagandla7456/College-Predictor-Based-on-Rank)]()
[![GitHub last-commit](https://img.shields.io/github/last-commit/deepikagandla7456/College-Predictor-Based-on-Rank)]()

### Wondering which college you might get into with your EAMCET rank?  
**College Predictor Based on Rank** is a simple command-line tool built using C that helps you predict the possible colleges and branches you might get admission into—based on your EAMCET rank, gender, and reservation category.

Whether you're aiming for a top engineering college or want to explore your options, this tool gives you a quick idea of where you stand.


<p align="center">
Start planning your college future with confidence!
</p>
<p align="center">
<i>Just enter your rank,gender and category—and get a list of possible colleges.</i>
</p>

---

## Table of Contents

- [About](#about)
- [Features](#features)
- [Limitations & Future Work](#limitations--future-work)
- [Requirements](#requirements)
- [Setup and Compilation](#setup-and-compilation)
- [Usage](#usage)
- [Screenshots](#screenshots)
- [License](#license)

---

## About

This project is a **college prediction tool** designed for students who appear for the **EAMCET entrance exam**. Built entirely in C language, it helps predict the colleges and specific branches where a student might get a seat.

The tool takes three main inputs:
- **EAMCET Rank**
- **Gender**
- **Reservation Category (General, OBC, SC, ST)**

Based on this data, the program searches a predefined dataset and lists of colleges and branches where admission is possible.

---

## Features

- Predicts **engineering colleges** and **branches** based on EAMCET rank.
- Considers **gender** and **reservation category** for more accurate results.
- Displays a list of possible colleges and branches.
- Simple and fast command-line interface.
- Lightweight and written purely in C.

---

## Limitations & Future Work

### Limitations:
- Works with a limited dataset of colleges and branches.
- Predictions are based on fixed cutoff ranges and may not reflect the most current trends.

### Future Enhancements:
- Add real-time data integration from official sources.
- Include additional filters like location, college rating, and fees.
- Develop a GUI version for better user experience.
- Support predictions for other entrance exams.

---

## Requirements

- C compiler (GCC recommended)
- Basic command-line knowledge
- Works on any OS with a C compiler (Windows, Linux, macOS)

---

## Setup and Compilation

1. Clone the repository:

```bash
git clone https://github.com/deepikagandla7456/College-Predictor-Based-on-Rank.git
cd College-Predictor-Based-on-Rank
```
2. Compile the following command to start the application

```shell
 gcc main.c -o main
```


## Usage

To run the program
```shell
./main
```

## Screenshots
**User Input Screen**
![Image](https://github.com/user-attachments/assets/6bf333c2-7af0-4655-aa03-b9d9f6838832)

**Predicted Results**
![Image](https://github.com/user-attachments/assets/bd8fd8e5-c4e0-4b4b-8ccd-4764388bc6a7)


## License
This project is licensed under the [Apache License 2.0](LICENSE) - see the [LICENSE](LICENSE) file for details.
