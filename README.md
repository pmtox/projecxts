# 🔍 Fake News Detection System

An AI-powered web application that uses machine learning to detect fake news articles. Built with Flask, scikit-learn, and modern web technologies.

## ✨ Features

- **AI-Powered Analysis**: Uses machine learning models trained on thousands of news articles
- **Real-time Detection**: Instant analysis of news articles with confidence scores
- **Beautiful UI**: Modern, responsive design with glassmorphism effects
- **Interactive Background**: Animated particles background for enhanced user experience
- **Theme Toggle**: Switch between dark and purple themes
- **Responsive Design**: Works seamlessly on desktop and mobile devices

## 🛠️ Technology Stack

- **Backend**: Python, Flask
- **Machine Learning**: scikit-learn, pandas, numpy
- **Frontend**: HTML5, CSS3, JavaScript
- **Styling**: Custom CSS with glassmorphism effects
- **Animation**: Particles.js for background effects

## 📋 Prerequisites

- Python 3.7 or higher
- pip (Python package installer)

## 🚀 Installation

1. **Clone the repository**
   ```bash
   git clone <repository-url>
   cd Fake-News-Detection
   ```

2. **Install dependencies**
   ```bash
   pip install -r requirements.txt
   ```

3. **Run the application**
   ```bash
   cd app
   python app.py
   ```

4. **Open your browser**
   Navigate to `http://localhost:5000`

## 📁 Project Structure

```
Fake News Detection/
├── app/
│   ├── app.py                 # Flask application
│   ├── index.html             # Home page
│   ├── verify.html            # News verification page
│   ├── about.html             # About page
│   └── static/
│       ├── css/
│       │   └── style.css      # Main stylesheet
│       ├── js/
│       │   ├── background.js  # Background animation
│       │   └── particles.min.js # Particles library
│       └── img/
│           └── logo.svg       # Application logo
├── data/                      # Training and test datasets
├── models/                    # Trained ML models
├── notebooks/                 # Jupyter notebooks for analysis
├── requirements.txt           # Python dependencies
└── README.md                 # Project documentation
```

## 🎯 How to Use

1. **Home Page**: Learn about the project and get started
2. **Verify Page**: 
   - Enter the news article title (optional)
   - Paste the full article content
   - Click "Analyze Article" to get instant results
3. **About Page**: Learn about the technology and methodology

## 🔬 How It Works

The system analyzes news articles using several key features:

- **Text Analysis**: Examines writing style, vocabulary, and sentence structure
- **Content Patterns**: Identifies suspicious patterns and inconsistencies
- **Statistical Analysis**: Uses machine learning algorithms trained on verified datasets
- **Confidence Scoring**: Provides probability scores for both true and fake classifications

## ⚠️ Important Disclaimer

This AI system provides valuable insights but should not be the sole source for determining news authenticity. Always:

- Cross-reference with multiple reliable sources
- Check the credibility of news outlets
- Look for fact-checking from established organizations
- Be critical of sensationalist headlines
- Verify quotes and statistics independently

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License - see the LICENSE file for details.

## 🙏 Acknowledgments

- Built with 💙 for AI-powered truth detection
- Inspired by the need to combat misinformation in the digital age
- Uses open-source libraries and frameworks

## 📞 Contact

For questions or support, please open an issue on GitHub.

---

**Built with 💙 for AI-powered truth detection 🚀**
